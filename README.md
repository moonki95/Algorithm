# 자료구조 및 알고리즘 공부

## 1. 최대공약수 & 최소공배수 구하기

* 유클리드 호제법을 통한 최대공약수 구하기
  * 유클리드 호제법이란 숫자 a,b가 있을 때, a를 b로 나눈 나머지와 b의 최대공약수 는 a 와 b 의 최대공약수와 같다는 성질을 가짐
    ```python
    def gcd(a,b):
        while max(a,b):
            try:
                a,b = b , a % b
            except:
                return a
    ```
* 최소공배수 구하기
  * 최소공배수는 a와 b의 곱을 a와 b의 최대공약수로 나눈값과 같다.
    ```python
    def lcm(a,b):
        return a * b // gcd(a,b)
    ```
