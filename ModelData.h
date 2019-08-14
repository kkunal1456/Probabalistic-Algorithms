class gsl_matrix;


class ModelData
{


  public:
    ModelData();
    void ReadDataFromFile(std::string sPathForInputFile);
    void SetDataPoints(gsl_matrix *pData);

  private:

    int m_iNoOfData;
    int m_iDataDim;
    gsl_matrix* m_pData;

};
