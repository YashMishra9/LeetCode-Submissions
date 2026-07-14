class Solution {
public:
    int second(string Time){
        int h=stoi(Time.substr(0,2));
        int m=stoi(Time.substr(3,2));
        int s=stoi(Time.substr(6,2));
        int totalSeconds=h*3600+m*60+s;
        return totalSeconds;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int diff=second(endTime)-second(startTime);
        return diff;

    }
};
