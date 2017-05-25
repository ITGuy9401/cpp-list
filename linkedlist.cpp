namespace CPPLIST {
	struct LinkedListSTR {
		int value;
		struct LinkedListSTR * next;
		struct LinkedListSTR * previous;
	};
	
	class LinkedList {
		int size;
		struct LinkedListSTR * firstItem;
		public:
			int getSize() {
				return size;
			}
			struct LinkedListSTR getFirstElement() {
				
			}
	};
}
