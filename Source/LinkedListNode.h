#pragma once

namespace DataStructures
{
	template<typename T>
	struct LinkedListNode
	{
	private:
		T* node = nullptr;
		unsigned int size = 0;
		LinkedListNode* nextNode = nullptr;
		LinkedListNode* previousNode = nullptr;

	public:
		LinkedListNode(const unsigned int& size, LinkedListNode<T>* nextNode, LinkedListNode<T>* previousNode) :
			node(new T[size]), size(size), nextNode(nextNode), previousNode(previousNode){}

		~LinkedListNode()
		{
			delete[] this->node;
		}

		unsigned int Size() const
		{
			return this->size;
		}

		LinkedListNode<T>* NextNode() const
		{
			return this->nextNode;
		}

		LinkedListNode<T>* PreviousNode() const
		{
			return this->previousNode;
		}

		T GetData(const unsigned int& index) const
		{
			return this->node[index];
		}

		void SetData(const unsigned int& index, const T& data)
		{
			this->node[index] = data;
		}
	};
}