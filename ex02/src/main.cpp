/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/14 22:36:24 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include <iostream>
#include <string>

void testEmptyArray() {
    std::cout << "Test: Empty Array\n";
    Array<int> emptyArray;
    std::cout << "Size: " << emptyArray.size() << " (expected 0)\n";
    try 
	{
        emptyArray[0];
    } catch (const std::exception &e) 
	{
        std::cout << "Accessing empty array threw exception: " << e.what() << "\n";
    }
    std::cout << "----------------------------------\n";
}

void testDefaultInitialization()
{
    std::cout << "Test: Default Initialization\n";
    Array<int> intArray(5);
    std::cout << "Size: " << intArray.size() << " (expected 5)\n";
    for (size_t i = 0; i < intArray.size(); i++) 
	{
        std::cout << "Element " << i << ": " << intArray[i] << " (expected 0)\n";
    }
    std::cout << "----------------------------------\n";
}

void testCopyConstructor()
{
    std::cout << "Test: Copy Constructor\n";
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";

    Array<std::string> copiedArray(stringArray);
    copiedArray[1] = "Everyone";

    std::cout << "Original Array:\n";
    for (size_t i = 0; i < stringArray.size(); i++)
	{
        std::cout << "Element " << i << ": " << stringArray[i] << "\n";
    }

    std::cout << "Copied Array:\n";
    for (size_t i = 0; i < copiedArray.size(); i++)
	{
        std::cout << "Element " << i << ": " << copiedArray[i] << "\n";
    }
    std::cout << "----------------------------------\n";
}

void testAssignmentOperator()
{
    std::cout << "Test: Assignment Operator\n";
    Array<double> array1(3);
    array1[0] = 1.1;
    array1[1] = 2.2;
    array1[2] = 3.3;

    Array<double> array2(5);
    array2 = array1;

    array2[0] = 9.9;

    std::cout << "Original Array:\n";
    for (size_t i = 0; i < array1.size(); i++)
	{
        std::cout << "Element " << i << ": " << array1[i] << "\n";
    }

    std::cout << "Modified Assigned Array:\n";
    for (size_t i = 0; i < array2.size(); i++) {
        std::cout << "Element " << i << ": " << array2[i] << "\n";
    }
    std::cout << "----------------------------------\n";
}

void testOutOfBoundsAccess() {
    std::cout << "Test: Out of Bounds Access\n";
    Array<int> intArray(3);
    try
	{
        intArray[3] = 10;
    } catch (const std::exception &e)
	{
        std::cout << "Accessing out-of-bounds threw exception: " << e.what() << "\n";
    }
    try {
        intArray[-1] = 20;
    } catch (const std::exception &e)
	{
        std::cout << "Accessing out-of-bounds threw exception: " << e.what() << "\n";
    }
    std::cout << "----------------------------------\n";
}

struct Point 
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

void testArrayWithCustomType()
{
    std::cout << "Test: Array with Custom Type\n";


    Array<Point> points(3);
    points[0] = Point(1, 2);
    points[1] = Point(3, 4);
    points[2] = Point(5, 6);

    for (size_t i = 0; i < points.size(); i++) {
        std::cout << "Point " << i << ": (" << points[i].x << ", " << points[i].y << ")\n";
    }
    std::cout << "----------------------------------\n";
}

void testLargeArray() {
    std::cout << "Test: Large Array\n";
    Array<int> largeArray(1000);
    std::cout << "Size of Large Array: " << largeArray.size() << "\n";

    for (size_t i = 0; i < largeArray.size(); i++) {
        largeArray[i] = static_cast<int>(i);
    }

    std::cout << "First Element: " << largeArray[0] << "\n";
    std::cout << "Last Element: " << largeArray[largeArray.size() - 1] << "\n";
    std::cout << "----------------------------------\n";
}

void testNestedArray()
{
    // Test: Nested Array
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test: Nested Array" << std::endl;

    try {
        // Create an Array of Array<int>
        Array<Array<int> > nestedArray(3);

        // Initialize each inner array
        for (size_t i = 0; i < nestedArray.size(); i++) {
            Array<int> innerArray(3); // Create an inner array of size 3

			
            for (size_t j = 0; j < innerArray.size(); j++) 
                innerArray[j] = i;
            nestedArray[i] = innerArray;
        }

        for (size_t i = 0; i < nestedArray.size(); i++)
		{
            std::cout << "Inner Array " << i << ": ";
            for (size_t j = 0; j < nestedArray[i].size(); j++) 
                std::cout << nestedArray[i][j] << " ";
            std::cout << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main()
{
    testEmptyArray();
    testDefaultInitialization();
    testCopyConstructor();
    testAssignmentOperator();
    testOutOfBoundsAccess();
    testArrayWithCustomType();
    testLargeArray();
	testNestedArray();
    return 0;
}
