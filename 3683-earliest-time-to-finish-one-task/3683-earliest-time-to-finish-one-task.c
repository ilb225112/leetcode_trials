int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int trackmin=INT_MAX;
    for(int i=0;i<tasksSize;i++){
        trackmin=fmin(trackmin,tasks[i][0]+tasks[i][1]);
    }

    return trackmin;
}