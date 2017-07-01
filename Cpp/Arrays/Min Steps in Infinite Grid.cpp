//https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    
    int len = X.size();
    int steps = 0;
    assert(len==Y.size());

    for(int i=1; i<len; ++i){
        steps += max((int)abs(X[i] - X[i-1]),(int)abs(Y[i]-Y[i-1]));
    }
    
    return steps;
}
