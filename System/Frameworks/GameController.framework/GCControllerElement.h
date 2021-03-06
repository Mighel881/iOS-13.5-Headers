/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GCController;

@interface GCControllerElement : NSObject {

	GCControllerElement* _collection;
	GCController* _controller;

}

@property (assign,nonatomic,__weak) GCController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) GCControllerElement * collection;              //@synthesize collection=_collection - In the implementation block
@property (getter=isAnalog,nonatomic,readonly) BOOL analog; 
-(float)value;
-(GCControllerElement *)collection;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(BOOL)_setValue:(float)arg1 ;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(void)setCollection:(GCControllerElement *)arg1 ;
@end

