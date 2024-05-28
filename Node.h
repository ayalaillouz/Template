#pragma once
template <class T>

class Node
{
	T value;
	Node <T>* nextRight;
	Node <T>* nextLeft;
public:
	Node() { nextRight = nullptr; nextLeft = nullptr; };
	Node(T val) { value = val; nextRight = nullptr; nextLeft = nullptr;};
	void SetValue(T val) { value = val; };
	void SetnextRight(Node <T>* n) { nextRight = n; };
	void SetnextLeft(Node <T>* n) { nextLeft = n; };
	T GetValue() { return value; };
	Node <T>* GetnextRight() { return nextRight; };
	Node <T>* GetnextLeft() { return nextLeft; };
};

