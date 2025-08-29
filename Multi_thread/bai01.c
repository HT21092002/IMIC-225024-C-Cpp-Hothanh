#include<stdio.h>
#include<Windows.h>
HANDLE ev1, ev2;   // Event để đồng bộ
DWORD WINAPI function(LPVOID lpParameter) {
	while (1) {
		printf("Say hello\n");
		Sleep(1000);
		SetEvent(ev2);
	}
}
int main() {
	// tạo 2 event (ban đầu chỉ cho task1 chạy)
	ev1 = CreateEvent(NULL, FALSE, TRUE, NULL);   // signaled (Task1 chạy trước)
	ev2 = CreateEvent(NULL, FALSE, FALSE, NULL);  // nonsignaled
	CreateThread(NULL,128,function,NULL,0,NULL);
	while (1) {
		printf("Xin chao\n");
		Sleep(1000);
		// báo Task 1 được chạy
		SetEvent(ev1);
	}
	CloseHandle(ev1);
	CloseHandle(ev2);
	return 0;
}
