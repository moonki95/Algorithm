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

## 2. 소수 구하기
* 일반적인 소수 판별하기(시간고려안하고 무식하게 다 구하는 방법)
  ```python
  def isPrime(num):
    for i in range(2,num):
      if num % i == 0:
        return 0
    return 1
  ```
* 에라토스테네스의 체(시간을 많이 줄일 수 있는 효과적인 방법)
  * 2가 소수면 2의 배수는 소수가 아님, 즉 2의 배수는 모두 False처리
  * 3이 소수면 3의 배수는 소수가 아님, 즉 3의 배수는 모두 False처리
  * 이렇게 직접 무식하게 다 구하는 방법보다는 에라토스테네스의 체 방법을 써서 구하는것이 효율적
  ```python
  Prime = [True] * NUMBER
  def isPrime():
    for i in range(2, int(NUMBER ** 0.5) +1):
      if Prime[i] == True:
        j = 2
        while i * j <= NUMBER:
          Prime[i*j] = False
          j += 1
  ```