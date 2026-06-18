double angleClock(int hour, int minutes) {
    if (hour==12) hour=0;
    double hr = hour*30.0 + minutes*0.5;
    double min=minutes*6.0;
    double res=(hr>min)?(hr-min):(min-hr);
    return (res<180)?res:360-res;
}