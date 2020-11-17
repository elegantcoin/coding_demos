#include <stdio.h>
#include "coding_demo.h"
#include "coding_demo_ut.h"

CPPUNIT_TEST_SUITE_REGISTRATION(UTNode);


//prepare data
//Node static_node;
//static_node = {1,1};
//static_node = {2,4};
//static_node = {6,8};


void UTNode::test_func()
{
	Node static_node;
	int ret = static_node.add_two(1,10);
	CPPUNIT_ASSERT_EQUAL(11, ret);

	int ret2 = static_node.add_two(10,1);
	CPPUNIT_ASSERT_EQUAL(11, ret2);

	int ret3 = static_node.add_two(100,1);
	CPPUNIT_ASSERT_EQUAL(11, ret3);
	printf("\n test_func begins ...\n");
}