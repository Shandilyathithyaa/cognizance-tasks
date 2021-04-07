# Approach
The task is to find the minimum no. of steps from 0 to x. The steps are in the order of 1-5 units; Assuming the elephant can take steps of 5/4/... units continuously, if we 
divide the remaining distance to cover by the units per step, we get no. of steps in the order of those units per step. By this way we can find the no. of steps for each units per 
step i.e. from 5 to 1 to find the result. 
1. We divide the total distance x by 5; The quotient gives the no. of steps with 5 units per step.
2. Then we divide the remainder from the division i.e. remaining distance with 4; The quotient gives the no. of steps with 4 units per step.
3. We continue the processs till we get remainder as 0 which implies the sum of quotients of above operations gives the minimum no. of steps from 0 to x.

# Output
![image](https://user-images.githubusercontent.com/73104941/113803254-ca8ce380-9779-11eb-834f-9cb324dd56bb.png)
