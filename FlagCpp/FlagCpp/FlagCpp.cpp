// FlagCpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

// 함수 정의 : 이름은 sayHello, 반환형은 void(아무것도 변환하지 않음)
void sayHello() {
    std::cout << "안녕하세요!" << std::endl;
}

int add(int a, int b) { // int형 두 개를 받아서 int형을 반환
    return a + b;
}

void sayMyNameThree() {
    for (int i = 0; i < 3; i++) {
        std::cout << "진정모" << std::endl;
    }
}

class Student {
public:
    std::string name; // 학생이름
    int age; // 학생 나이

    void introduce() { // 자기소개 함수
        std::cout << "이름: " << name << ", 나이: " << age << std::endl;
    }
};

class AnimalNormal {
public:
    std::string name; // 동물이름
    int age; // 동물나이
    void introduce() { // 자기소개 함수
        std::cout << "이 동물의 이름은 " << name << "이고, 나이는 " << age << "살입니다." << std::endl;
    }
};

class Animal {
private:
    int secretCode;

public:
    std::string name;
    int age;

    // 생성자: 객체가 만들어질때 자동 호출
    Animal(std::string n, int a) {
        name = n;
        age = a;
        secretCode = 1234; // 내부에서는 사용 가능
    }

    void showSecret() {
        std::cout << "비밀코드 : " << secretCode << std::endl;
    }

    void introduce() {
        std::cout << "이 동물의 이름은 " << name << "이고, 나이는 " << age << "살입니다." << std::endl;
    }
};

class Person {
private:
    std::string ssn;

public:
    std::string name;
    int age;

    // 생성자 : 객체가 만들어질때 자동 호출
    Person(std::string n, int a, std::string s) {
        name = n;
        age = a;
        ssn = s;
    }

    void showSSN() {

    }
};

int main()
{
    // 2. 함수
    //sayHello(); // 함수 호출
    //sayHello(); // 반복호출 가능
    //return 0;

    //int result = add(10, 20); // add 함수에 10,20 전달
    //std::cout << "10 + 20 = " << result << std::endl;
    //return 0;
    
    //// 3. 배열 (Array)
    //int scores[3] = { 90, 85, 78 };
    //for (int i = 0; i < 3; i++) {
    //    std::cout << i + 1 << "번째 점수: " << scores[i] << std::endl;
    //}
    //return 0;

    /*float high[3] = { 172.5, 165.2, 180.3 };
    for (int i = 0; i < 3; i++) {
        std::cout << i + 1 << "번째 학생 키 :" << high[i] << std::endl;
    }*/

    //Student s; // Student 클래스의 객체(실제 학생 한 명) 생성
    //s.name = "진정모"; // 이름 지정
    //s.age = 28; // 나이 지정
    //s.introduce(); // 자기소개 함수 호출23
    //return 0;

    //Animal dog; // Animal 클래스의 객체 (실제 동물 한 마리) 생성
    //dog.name = "강아지"; // 이름 지정
    //dog.age = 7; // 나이 지정
    //dog.introduce(); // 자기소개 함수 호출
    //return 0;

    Animal dog("강아지", 7);
    Animal cat("고양이", 3);
    dog.introduce();
    cat.introduce();
    dog.showSecret();
    cat.showSecret();
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
