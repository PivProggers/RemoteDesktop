// RemoteWorkStation.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"
#include "..\Transport\TCPSocket.h"
#include <iostream>
#include "gtest\gtest.h"
#include "..\Client\TestFunctionDeclaration.h"

using namespace std;

class ClientTest : public ::testing::Test {
protected:
	void SetUp() override {

	}

	void TearDown() override {
	}

};

TEST_F(ClientTest, MethodBarDoesAbc) {
	EXPECT_EQ(0, 0);
}
int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}