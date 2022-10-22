#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void createStaticBigVector();
void createStackBigVector();
void createHeapBigVector();
    
int main(){

    auto startStatic = steady_clock::now();
    for (int i = 0; i < 100000; i++){
        createStaticBigVector();
    }
    auto endStatic = steady_clock::now();
    auto elapsedStatic = endStatic - startStatic;
    cout << "Criação do vetor estático: " << duration <double> {elapsedStatic}.count() << "segundos\n";

    auto startStack = steady_clock::now();
    for (int i = 0; i < 100000; i++){
        createStackBigVector();
    }
    auto endStack = steady_clock::now();
    auto elapsedStack = endStack - startStack;
    cout << "Criação do vetor pilha: " << duration <double> {elapsedStack}.count() << "segundos\n";

    auto startHeap = steady_clock::now();
    for (int i = 0; i < 100000; i++){
        createHeapBigVector();
    }
    auto endHeap = steady_clock::now();
    auto elapsedHeap = endHeap - startHeap;
    cout << "Criação do vetor monte: " << duration <double> {elapsedHeap}.count() << "segundos\n";

    return 0;
}

void createStaticBigVector(){
    static int staticVet[5000];
    for (int i = 0; i < 5000; i++){
        staticVet[i] = i * i;
    }
}

void createStackBigVector(){
    int stackVet[5000];
    for (int i = 0; i < 5000; i++){
        stackVet[i] = i * i;
    }
}

void createHeapBigVector(){
    int *heapVet = (int*)malloc(sizeof(int)*5000);
    for (int i = 0; i < 5000; i++){
        heapVet[i] = i * i;
    }
}