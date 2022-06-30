#pragma once

struct Node
{
	string Data;

	Node* Next;
};

class Stack
{
public:

private:
	Node* list = nullptr;
	Node* top = nullptr;
};