namespace AUTOCHAIR
{

  // maps inVal from the range of inMin-inMax to the range of outMin-outMax
  int mapRange(int inVal, int inMin, int inMax, int outMin, int outMax)
  {
    int outVal = outMin + ((outMax-outMin) * 100 * (inVal-inMin) / (inMax-inMin)) / 100;

    if(outVal > outMax)
      {
	outVal = outMax;
      }
    else if (outVal < outMin)
      {
	outVal = outMin;
      }
    
    return outVal;
  }

}
