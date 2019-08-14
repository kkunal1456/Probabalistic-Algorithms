//This function performs time integration of modal co-ordinates using Langevin Dynamics

#include<stdio.h>
#include<gsl/gsl_vector.h>
#include<gsl/gsl_matrix.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include<gsl/gsl_math.h>

ModelData::ModelData()
: m_iNoOfData(0)
, m_iDataDim(0)
, m_pData(nullptr)
{}

void ModeData::ReadDataFromFile(std::string sPathForInputFile)
{


}


