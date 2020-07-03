// 문제 : 사람을 3명 만들고 각각 다음사람을 가리키게 만들어주세요.
// 조건 : 수정가능지역만 수정가능합니다.
// 힌트 : 포인터 변수에 NULL 을 넣으면 아무것도 안가리킨다는 뜻 입니다.

#include <stdio.h>
#define TRUE 1
#define FALSE 0
// 수정가능지역 시작

// struct Person {
//   char* name;



//   struct Person* next; //자기자신을 포함하는 structure; 주소를 할당 받아야 함. 포인터 변수없이 사용불가. next = Person struct를 포함하고 있음.



// };
// 여기서 구조체를 정의해주세요.
// 수정가능지역 끝

int main(void) {
  
  // struct Person p1;
  // p1.name = "하나";

  // struct Person p2;
  // p2.name = "둘";

  // struct Person p3;
  // p3.name = "셋";
  
  // // 수정가능지역 시작

  // p1.next = &p2; //p1의 next에 Person struct 정보 새로 넣기;
  // p2.next = &p3; //p2 next에 Person strct 정보 넣어두기;
  // p3.next = NULL; //p3 안에 있는 next가 null 이 아닐경우 빈칸이 되므로 오류 발생 가능. 결국 NULL로 집적 처리 해주기. (메모리 최적화)

  // // 수정가능지역 끝

  // printf("마지막 사람의 이름은 %s 입니다.", p1.next->next->name);
  // // 출력 : 마지막 사람의 이름은 셋입니다.



  //=====================================================================================//


  typedef enum { false, true } bool;

  typedef struct Person {

    char* name;
  } Person;


  bool b = false;
  b = true;

  if ( true && b ) {
    printf("참!\n");
  }

  Person p1;
  p1.name = "홍길동";
  printf("이름 : %s\n", p1.name);

  

  return 0;
}