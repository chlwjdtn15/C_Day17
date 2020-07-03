// 문제 : 사람을 3명 만들고 각각 다음사람을 가리키게 만들어주세요.
// 조건 : 수정가능지역만 수정가능합니다.
// 힌트 : 포인터 변수에 NULL 을 넣으면 아무것도 안가리킨다는 뜻 입니다.

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SIZE 3 // 수정 불가
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


  // typedef enum { false, true } bool;

  // typedef struct Person {

  //   char* name;
  // } Person;


  // bool b = false;
  // b = true;

  // if ( true && b ) {
  //   printf("참!\n");
  // }

  // Person p1;
  // p1.name = "홍길동";
  // printf("이름 : %s\n", p1.name);

//======================================================================================//
// 문제 : 몇명의 사람의 나이를 받을지 입력받고 입력받은 수 만큼 나이를 입력받은 후 저장해주세요.
// 조건 : malloc을 사용할 수 없습니다.
// 출력예시
/*
사람의 숫자를 입력해주세요. : 7[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 4[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 100[엔터]
3 이하로 입력해주세요.
사람의 숫자를 입력해주세요. : 2[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
1번째 사람의 나이 : 33
2번째 사람의 나이 : 50
*/
  int ages[SIZE]; // 수정 불가
  
  int people_num;
  int age;

    scanf("사람의 숫자를 입력해주세요. : %d", &people_num);

    if (people_num > 3) {
      printf("3 이하로 입력해주세요\n");

      people_num = 0;
    }else {
      for (int i = 0; i <= people_num; i++) {

        scanf("%d 번째 사람의 나이를 입력해주세요 : %d", i, &age);
        


      }
  }
  

  return 0;
}