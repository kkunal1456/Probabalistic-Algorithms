
class GaussianMixtureModel
{

public:
  GaussianMixtureModel();
  void SetInputData(ModelData* pInputData);
  void FitData();
  void WriteCoeffsToFile(const std::string &sPathForParametersFile);

private:

  int m_iNoOfClusters;
  int m_iDataDim;
  gsl_matrix *m_pCovMatrix;
  gsl_vector *m_pMeanVector;  
  gsl_vector *m_pWieghtVetor;
  gsl_matrix *m_pCovMatrix;

};
