#include<stdio.h>
#include<Windows.h>
HANDLE read_pipe;
HANDLE write_pipe;
int globa_var;
DWORD WINAPI function(LPVOID lpParameter) {
	while (1) {
		printf("[function] sensor data:%d\n",globa_var);
		Sleep(1000);
	}
}
int main() {
	CreateThread(NULL, 128, function, NULL, 0, NULL);
	CreatePipe(&read_pipe,&write_pipe,NULL,12);
	int sensor_data=0;
	while (1) {
		sensor_data++;
		globa_var = sensor_data;
		printf("[main] is running...\n");
		Sleep(1000);
	}
	return 0;
}