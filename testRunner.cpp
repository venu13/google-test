#include<iostream>
#include<gtest/gtest.h>
#include "libraryCode.h"

TEST_F(AccountTestFixture, TestEmptyAccount)
{
    Account account;

    double balance = account.getBalance();
    ASSERT_EQ(0, balance);
}

class AccountTestFixture : public ::testing::Test
{
public:
    void SetUp() override;
    void TearDown() override;
    static void SetUpTestCase();
    static void TearDownTestCase();
protected:
    Account* account;
};

void AccountTestFixture::SetUp()
{
    std::cout << "SetUp called" << std::endl;
    account = new Account();
    account->deposit(10.5);
}

void AccountTestFixture::TearDown()
{
    std::cout << "TearDown called" << std::endl;
    delete account;
    account = nullptr;

}

void AccountTestFixture::SetUpTestCase()
{
    std::cout << "SetUpTestCase called" << std::endl;
}

void AccountTestFixture::TearDownTestCase()
{
    std::cout << "TearDownTestCase called" << std::endl;
}

TEST_F(AccountTestFixture, TestDeposit)
{
    ASSERT_EQ(10.5, account->getBalance());
}

TEST_F(AccountTestFixture, TestWithdraw)
{
    account->withdraw(3);
    ASSERT_EQ(7.5, account->getBalance());
}

TEST_F(AccountTestFixture, TestWithdrawInsufficientFunds)
{
    ASSERT_THROW(account->withdraw(300), std::runtime_error);
}

TEST_F(AccountTestFixture, TestTransferOK)
{
    Account to;

    account->transfer(to, 2);
    ASSERT_EQ(8.5, account->getBalance());
    ASSERT_EQ(2, to.getBalance());
}

TEST_F(AccountTestFixture, TestTransferInsufficientFunds)
{
    Account to;

    ASSERT_THROW(account->transfer(to, 200), std::runtime_error);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}