//
//  LoadingScene.h
//  Ikasitz
//
//  Created by Iker Mendilibar Fernandez on 18/01/13.
//
//

#ifndef __Ikasitz__LoadingScene__
#define __Ikasitz__LoadingScene__

#include "cocos2d.h"
#include "IkasitzAPI.h"

USING_NS_CC;

class LoadingScene : public CCScene
{
public:
	LoadingScene();
	~LoadingScene();
    
	virtual bool init();
	CREATE_FUNC(LoadingScene);
    
    
private:
    IkasitzAPI *m_pAPI;
    
    void finishLoading();
};

#endif /* defined(__Ikasitz__LoadingScene__) */
