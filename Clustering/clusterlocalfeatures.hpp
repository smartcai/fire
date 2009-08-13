/*
  This file is part of the FIRE -- Flexible Image Retrieval System

  FIRE is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  FIRE is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with FIRE; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __clusterlocalfeatures_hpp__
#define __clusterlocalfeatures_hpp__

#include "localfeatures.hpp"
#include "baseclusterer.hpp"
#include <stdlib.h>
                   
ResultVector cluster(::std::vector<LocalFeatures*> &locfeat, 
                     ::std::string splitMode, 
                     uint maxSplit, 
                     uint stopWithNClusters,
                     ::std::string disturbMode, 
                     ::std::string poolMode, 
                     uint dontSplitBelow, 
                     uint iterationsBetweenSplits, 
                     uint minObservationsPerCluster, 
                     double epsilon, 
                     ::std::string distanceMaker,
                     ::std::string saveModelTo="",
                     bool saveBeforeSplits=false,
                     ::std::string loadModelFrom=""
                     );

ResultVector cluster(::std::vector<LocalFeatures*> &locfeat, 
                     bool clusterWithPositions,
                     ::std::string splitMode, 
                     uint maxSplit, 
                     uint stopWithNClusters,
                     ::std::string disturbMode, 
                     ::std::string poolMode, 
                     uint dontSplitBelow, 
                     uint iterationsBetweenSplits, 
                     uint minObservationsPerCluster, 
                     double epsilon, 
                     ::std::string distanceMaker,
                     ::std::string saveModelTo="",
                     bool saveBeforeSplits=false,
                     ::std::string loadModelFrom=""
                     );


#endif
