namespace AUTOCHAIR
{

  // maps inVal from the range of inMin-inMax to the range of outMin-outMax
  template<typename T>
  T mapRange(T inVal, T inMin, T inMax, T outMin, T outMax)
  {
    if((inMax - inMin) == 0)
    {
      throw std::runtime_error("Division by zero! inMin equals inMax!");
    }
    T outVal = outMin + ((outMax-outMin) * (inVal-inMin) / (inMax-inMin));

    if(outMax >= outMin)
    {
      if(outVal > outMax)
        {
        outVal = outMax;
        }
      else if (outVal < outMin)
        {
        outVal = outMin;
        }
    }
    else
    {
      if(outVal < outMax)
      {
      outVal = outMax;
      }
      else if (outVal > outMin)
      {
      outVal = outMin;
      }

    }
        
    return outVal;
  }


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
