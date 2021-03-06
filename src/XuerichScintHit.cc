#include <G4UnitsTable.hh>
#include <G4VVisManager.hh>
#include <G4Circle.hh>
#include <G4Colour.hh>
#include <G4VisAttributes.hh>

#include "XuerichScintHit.hh"

G4Allocator<XuerichScintHit> XuerichScintHitAllocator;

XuerichScintHit::XuerichScintHit() {}

XuerichScintHit::~XuerichScintHit()
{
	if(m_pParticleType) delete m_pParticleType;
	//if(m_pParentType) delete m_pParentType;
	//if(m_pCreatorProcess) delete m_pCreatorProcess;
	//if(m_pDepositingProcess) delete m_pDepositingProcess;
}

XuerichScintHit::XuerichScintHit(const XuerichScintHit &hXuerichScintHit):G4VHit()
{
	//m_iTrackId 			= hXuerichScintHit.m_iTrackId;
	//m_iParentId 			= hXuerichScintHit.m_iParentId;
	m_pParticleType 		= hXuerichScintHit.m_pParticleType;
	//m_pParentType 		= hXuerichScintHit.m_pParentType ;
	//m_pCreatorProcess 	= hXuerichScintHit.m_pCreatorProcess ;
	//m_pDepositingProcess 	= hXuerichScintHit.m_pDepositingProcess ;
	m_hPosition		 		= hXuerichScintHit.m_hPosition;
	m_dEnergyDeposited		= hXuerichScintHit.m_dEnergyDeposited;
	m_dKineticEnergy 		= hXuerichScintHit.m_dKineticEnergy ;
	m_dTime		 			= hXuerichScintHit.m_dTime;
}

const XuerichScintHit &
XuerichScintHit::operator=(const XuerichScintHit &hXuerichScintHit)
{
	//m_iTrackId 			= hXuerichScintHit.m_iTrackId;
	//m_iParentId 			= hXuerichScintHit.m_iParentId;
	m_pParticleType 		= hXuerichScintHit.m_pParticleType;
	//m_pParentType 		= hXuerichScintHit.m_pParentType ;
	//m_pCreatorProcess 	= hXuerichScintHit.m_pCreatorProcess ;
	//m_pDepositingProcess 	= hXuerichScintHit.m_pDepositingProcess ;
	m_hPosition 			= hXuerichScintHit.m_hPosition;
	m_dEnergyDeposited 		= hXuerichScintHit.m_dEnergyDeposited;
	m_dKineticEnergy 		= hXuerichScintHit.m_dKineticEnergy ;
	m_dTime 				= hXuerichScintHit.m_dTime;
	
	return *this;
}

G4int
XuerichScintHit::operator==(const XuerichScintHit &hXuerichScintHit) const
{
	return ((this == &hXuerichScintHit) ? (1) : (0));
}

void XuerichScintHit::Draw()
{
	G4VVisManager* pVVisManager = G4VVisManager::GetConcreteInstance();
	
	if(pVVisManager)
	{
		G4Circle hCircle(m_hPosition);
		G4Colour hColour(1.000, 0.973, 0.184);
		G4VisAttributes hVisAttributes(hColour);
		
		hCircle.SetScreenSize(0.1);
		hCircle.SetFillStyle(G4Circle::filled);
		hCircle.SetVisAttributes(hVisAttributes);
		pVVisManager->Draw(hCircle);
	}
}

void XuerichScintHit::Print()
{
	G4cout << "-------------------- LXe hit --------------------" 
		//<< "Id: " << m_iTrackId
		//<< " Particle: " << *m_pParticleType
		//<< " ParentId: " << m_iParentId
		//<< " ParentType: " << *m_pParentType << G4endl
		//<< "CreatorProcess: " << *m_pCreatorProcess
		//<< " DepositingProcess: " << *m_pDepositingProcess << G4endl
		<< "Position: " << m_hPosition.x()/mm
		<< " " << m_hPosition.y()/mm
		<< " " << m_hPosition.z()/mm
		<< " mm" << G4endl
		<< "EnergyDeposited: " << m_dEnergyDeposited/keV << " keV"
		<< " KineticEnergyLeft: " << m_dKineticEnergy/keV << " keV"
		<< " Time: " << m_dTime/s << " s" << G4endl;
}

