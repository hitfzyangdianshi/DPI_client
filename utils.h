//
// Created by qwertyu on 9/26/22.
//

#ifndef UNTITLED_UTILS_H
#define UNTITLED_UTILS_H


#include <cstdio>
#include <unistd.h>
#include <sys/time.h>
#include <cstring>
#include <cstdlib>


#define VMRSS_LINE 22
#define VMSIZE_LINE 18
#define PROCESS_ITEM 14

class utils {

};


typedef struct {
    unsigned long user;
    unsigned long nice;
    unsigned long system;
    unsigned long idle;
}Total_Cpu_Occupy_t;


typedef struct {
    unsigned int pid;
    unsigned long utime;  //user time
    unsigned long stime;  //kernel time
    unsigned long cutime; //all user time
    unsigned long cstime; //all dead time
}Proc_Cpu_Occupy_t;



//获取CPU占用率
float get_proc_cpu(unsigned int pid);

//获取进程占用内存
unsigned int get_proc_mem(unsigned int pid);


//获取进程占用虚拟内存
unsigned int get_proc_virtualmem(unsigned int pid);

//进程本身
int get_pid(const char* process_name, const char* user = nullptr);

#endif //UNTITLED_UTILS_H
