int*
해당 자료형을 변수로 하는 그 변수의 주소를 저장할수 있는 자료형




Vetor

capacity 와 size

리스트 처럼 무작위로 생성되서 head와 tail을 생성해 주소로 하는것이 아니라 순차적으로 되는것 
 
만약 capacity :1
	size   :1
일때 더 size  가 더 늘어나면 초과되기 떄문에 capacity를 2배 늘려서 size를 늘린다.
하지만 예를들어
capacity : 8
size      : 2
처럼 size 가capasize의 1/4인 경우 메모리의 공간이 너무 많아 메모리 낭비가 되므로 capasize 의 1/2을 버린다.