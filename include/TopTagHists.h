#ifndef TopTagHists_H
#define TopTagHists_H

// ROOT include(s):
#include <TObject.h>
#include <TString.h>
#include "TH2.h"

// Local include(s):
#include <TMVA/Reader.h>
#include "SFrameTools/include/TMVA_tagger.h"
#include "include/BaseHists.h"
#include "include/BaseCycleContainer.h"
#include "HypothesisDiscriminator.h"
//#include "include/TopFitCalc.h"

/**
 *   Class for booking and filling TopJet histograms
 *
 *   
 *   @version $Revision: 1.1 $
 */

class TopTagHists : public BaseHists {

public:
   /// Named constructor
   TopTagHists(const char* name);

   /// Default destructor
   ~TopTagHists();

   void Init();

   void Fill();

   void Finish();

private:
TMVA_tagger* tmva_tagger;
//TMVA::Reader* reader;
   Chi2Discriminator* tagchi2discr;

}; // class TopTagHists


#endif // TopTagHists_H


