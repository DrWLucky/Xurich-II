/////////////////////////////////////////////////////////
//													   //
//   ++++++++++++++++++++++++++++++++++++++++++++++++  //
//   + Alexander Kish for XENON-XUERICH experiment	+  //
//   + UZH, 2008									+  //
// 	 ++++++++++++++++++++++++++++++++++++++++++++++++  //
//													   //
/////////////////////////////////////////////////////////
#ifndef XuerichDetectorConstruction_h
#define XuerichDetectorConstruction_h 1

#include <globals.hh>

#include <vector>
#include <map>


#include "G4VUserDetectorConstruction.hh"
#include "XuerichDetectorConstruction.hh"


class G4LogicalVolume;
class G4VPhysicalVolume;
class G4VisAttributes;
class G4Material;
class G4MaterialPropertiesTable;
class G4SubtractionSolid;
class G4UnionSolid;
class G4LogicalVolume;
class G4VPhysicalVolume;

class XuerichDetectorMessenger;


class XuerichDetectorConstruction: public G4VUserDetectorConstruction
{

  public:
    XuerichDetectorConstruction();
   ~XuerichDetectorConstruction();

    G4VPhysicalVolume *Construct();

	void SetTeflonReflectivity(G4double dReflectivity);
	void SetSS304LSteelReflectivity(G4double dReflectivity);
	void SetLXeScintillation(G4bool dScintillation);
	void SetLXeAbsorbtionLength(G4double dAbsorbtionLength);
    void SetLXeRayScatterLength(G4double dRayScatterLength);

	   
  private:

	G4Material *	Air;
	G4Material *	Vacuum;
	G4Material *	SSteel;
	G4Material *	Teflon;
	G4Material *	LXe;
	G4Material *	GXe;
	//G4Material *	LiqXe;
	//G4Material *	GasXe;
	G4Material *	LAr;
	G4Material *	LiqAr;
	G4Material *	GasAr;
	G4Material *	Quartz;
	G4Material *	metalAl;
	G4Material *	Alwire;
	G4Material *	PhotoCathodeAluminium;
	G4Material *	Lead;
	G4Material *	Poly;
	G4Material *	Copper;
	G4Material *	Concrete;
	G4Material *	BPE;
	G4Material *	Paraffin;
	G4Material *	Lead_m;

	//G4MaterialPropertiesTable*      teflon_prop;


	// Logical Volumes
	G4LogicalVolume *	Laboratory_log;	

	G4LogicalVolume *	ConcreteShield_log;
	G4LogicalVolume *	ConcreteShieldCavity_log;
	G4LogicalVolume *	BPEshield_log;
	G4LogicalVolume *	ShieldCavity_log;
	G4LogicalVolume *	ParaffinContainer_log;
	G4LogicalVolume *	Platform_log;

	G4LogicalVolume *	WallLeft_log;
	G4LogicalVolume *	WallFront_log;
	G4LogicalVolume *	WallRight_log;
	G4LogicalVolume *	WallBack_log;

	G4LogicalVolume *	GeneratorContainer_log;
	G4LogicalVolume *	GeneratorCavity_log;
	
	G4LogicalVolume *	OuterCanTube_log;
	G4LogicalVolume *	OuterCanBottom_log;
	G4LogicalVolume *	OuterCanLowerFlange_log;
	G4LogicalVolume *	OuterCanUpperFlange_log;

	G4LogicalVolume *	InnerCanTube_log;
	G4LogicalVolume *	InnerCanBottom_log;
	G4LogicalVolume *	InnerCanLowerFlange_log;
	G4LogicalVolume *	InnerCanUpperFlange_log;

	G4LogicalVolume *	SteelHolderTube_log;	
	G4LogicalVolume *	SteelHolderUpperSquare_log;
	G4LogicalVolume *	SteelHolderLowerSquare_log;

	G4LogicalVolume *	Support1_log;	////////////											
	G4LogicalVolume *	Support2_log;	//	1 - 2 //
	G4LogicalVolume *	Support3_log;	//	|	| //
	G4LogicalVolume *	Support4_log;	//	3 - 4 //
										////////////
	G4LogicalVolume *	Washer1_log;	////////////
	G4LogicalVolume *	Washer2_log;	//	1 - 2 //
	G4LogicalVolume *	Washer3_log;	//	|	| //
	G4LogicalVolume *	Washer4_log;	//	3 - 4 //
										////////////
	G4LogicalVolume *	TopClamp_log;
	
	G4LogicalVolume	*	TopHolderUpperTube_log;	
	G4LogicalVolume	*	TopHolderLowerTube_log;	
	G4LogicalVolume	*	TopHolderSquare_log;	

	G4LogicalVolume *	ExtractionSpacerUpperHalf_log;
	G4LogicalVolume *	ExtractionSpacerLowerHalf_log;
	
	G4LogicalVolume *	DriftSpacerUpperSquare_log;
	G4LogicalVolume *	DriftSpacerUpperTube_log;
	G4LogicalVolume *	DriftSpacerMiddleTube_log;
	G4LogicalVolume *	DriftSpacerLowerTube_log;
	G4LogicalVolume *	DriftSpacerLowerSquare_log;
	
	G4LogicalVolume	*	BottomHolderUpperTube_log;
	G4LogicalVolume	*	BottomHolderMiddleTube_log;
	G4LogicalVolume	*	BottomHolderLowerTube_log;
	
	G4LogicalVolume *	BottomClampUpperPart_log;
	G4LogicalVolume *	BottomClampMiddlePart_log;
	G4LogicalVolume *	BottomClampLowerPart_log;

	G4LogicalVolume	*	Filler_log;
	
	G4LogicalVolume *	topPMTbase_log;
	G4LogicalVolume *	topPMTcasing_log;
	G4LogicalVolume *	topPMTinterior_log;
	G4LogicalVolume *	topPMTwindow_log;
	G4LogicalVolume *	topPMTcathode_log;
	
	G4LogicalVolume *	bottomPMTbase_log;
	G4LogicalVolume *	bottomPMTcasing_log;
	G4LogicalVolume *	bottomPMTinterior_log;
	G4LogicalVolume *	bottomPMTwindow_log;
	G4LogicalVolume *	bottomPMTcathode_log;
	
	G4LogicalVolume *	AnodeGrid_log;
	G4LogicalVolume *	CathodeGrid_log;
	G4LogicalVolume *	GateGrid_log;

	G4LogicalVolume *	paraffin_log;
	G4LogicalVolume *	wood_log;
	G4LogicalVolume *	scintillator1_log;
	G4LogicalVolume *	scintillator2_log;
	G4LogicalVolume *	EJ1_log;
	G4LogicalVolume *	EJ2_log;
	G4LogicalVolume *	beamVac_log;

	G4LogicalVolume	*	LXeVol_log;
	G4LogicalVolume	*	GXeVol_log;
	G4LogicalVolume	*	LXeTarget_log;
	G4LogicalVolume	*	LXeGate_log;
	G4LogicalVolume	*	LXeCathode_log;
	
	// Physical Volumes
	G4VPhysicalVolume *	Laboratory_phys;

	G4VPhysicalVolume * ConcreteShield_phys;
	G4VPhysicalVolume * ConcreteShieldCavity_phys;
	G4VPhysicalVolume * BPEshield_phys;
	G4VPhysicalVolume * ShieldCavity_phys;
	G4VPhysicalVolume * ParaffinContainer_phys;
	G4VPhysicalVolume * Platform_phys;

	G4VPhysicalVolume * WallLeft_phys;
	G4VPhysicalVolume * WallFront_phys;
	G4VPhysicalVolume * WallRight_phys;
	G4VPhysicalVolume * WallBack_phys;

	G4VPhysicalVolume * GeneratorContainer_phys;
	G4VPhysicalVolume * GeneratorCavity_phys;
	
	G4VPhysicalVolume *	OuterCan_phys;
	G4VPhysicalVolume *	InnerCan_phys;
	
	//G4VPhysicalVolume *	SteelHolder_phys;
	G4VPhysicalVolume *	SteelHolderTube_phys;
	G4VPhysicalVolume *	SteelHolderUpperSquare_phys;
	G4VPhysicalVolume *	SteelHolderLowerSquare_phys;
	
	G4VPhysicalVolume *	Support1_phys;	////////////											
	G4VPhysicalVolume *	Support2_phys;	//	1 - 2 //
	G4VPhysicalVolume *	Support3_phys;	//	|	| //
	G4VPhysicalVolume *	Support4_phys;	//	3 - 4 //
										////////////
	G4VPhysicalVolume *	Washer1_phys;	////////////
	G4VPhysicalVolume *	Washer2_phys;	//	1 - 2 //
	G4VPhysicalVolume *	Washer3_phys;	//	|	| //
	G4VPhysicalVolume *	Washer4_phys;	//	3 - 4 //
										////////////
	G4VPhysicalVolume *	TopClamp_phys;
	
	G4VPhysicalVolume *	TopHolderUpperTube_phys;	
	G4VPhysicalVolume *	TopHolderLowerTube_phys;	
	G4VPhysicalVolume *	TopHolderSquare_phys;	
	
	G4VPhysicalVolume *	ExtractionSpacerUpperHalf_phys;
	G4VPhysicalVolume *	ExtractionSpacerLowerHalf_phys;
	
	G4VPhysicalVolume *	DriftSpacerUpperSquare_phys;
	G4VPhysicalVolume *	DriftSpacerUpperTube_phys;
	G4VPhysicalVolume *	DriftSpacerMiddleTube_phys;
	G4VPhysicalVolume *	DriftSpacerLowerTube_phys;
	G4VPhysicalVolume *	DriftSpacerLowerSquare_phys;
	
	G4VPhysicalVolume *	BottomHolderUpperTube_phys;
	G4VPhysicalVolume *	BottomHolderMiddleTube_phys;
	G4VPhysicalVolume *	BottomHolderLowerTube_phys;

	G4VPhysicalVolume *	BottomClampUpperPart_phys;
	G4VPhysicalVolume *	BottomClampMiddlePart_phys;
	G4VPhysicalVolume *	BottomClampLowerPart_phys;

	G4VPhysicalVolume *	Filler_phys;
	
	G4VPhysicalVolume *	topPMTbase_phys;
	G4VPhysicalVolume *	topPMTcasing_phys;
	G4VPhysicalVolume *	topPMTinterior_phys;
	G4VPhysicalVolume *	topPMTwindow_phys;
	G4VPhysicalVolume *	topPMTcathode_phys;
	
	G4VPhysicalVolume *	bottomPMTbase_phys;
	G4VPhysicalVolume *	bottomPMTcasing_phys;
	G4VPhysicalVolume *	bottomPMTinterior_phys;
	G4VPhysicalVolume *	bottomPMTwindow_phys;
	G4VPhysicalVolume *	bottomPMTcathode_phys;
	
	G4VPhysicalVolume *	AnodeGrid_phys;
	G4VPhysicalVolume *	CathodeGrid_phys;
	G4VPhysicalVolume *	GateGrid_phys;

	G4VPhysicalVolume *	paraffin_phys;
	G4VPhysicalVolume *	wood_phys;
	G4VPhysicalVolume *	scintillator1_phys;
	G4VPhysicalVolume *	scintillator2_phys;
	G4VPhysicalVolume *	EJ1_phys;
	G4VPhysicalVolume *	EJ2_phys;
	G4VPhysicalVolume *	beamVac_phys;

	G4VPhysicalVolume *	LXeVol_phys;
	G4VPhysicalVolume *	GXeVol_phys;
	G4VPhysicalVolume *	LXeTarget_phys;
	G4VPhysicalVolume *	LXeGate_phys;
	G4VPhysicalVolume *	LXeCathode_phys;

	// Visual Attributes
	G4VisAttributes *	Concrete_vis;
	G4VisAttributes *	BPE_vis;
	G4VisAttributes *	Cavity_vis;
	G4VisAttributes *	Paraffin_vis;
	G4VisAttributes *	Steel_vis;
	G4VisAttributes *	GeneratorContainer_vis;
	G4VisAttributes *	GeneratorCavity_vis;
	G4VisAttributes *	Teflon_vis;
	G4VisAttributes *	Cryostat_vis;
	G4VisAttributes *	SteelHolder_vis;
	G4VisAttributes *	Grids_vis;
	G4VisAttributes *	PMTcasing_vis;
	G4VisAttributes *	PMTinterior_vis;
	G4VisAttributes *	PMTwindow_vis;
	G4VisAttributes *	PMTcathode_vis;

	
	XuerichDetectorMessenger *m_pDetectorMessenger;

};

#endif

