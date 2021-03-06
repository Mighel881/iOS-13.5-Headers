/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFWorkflow, NSDictionary, UIResponder;

@interface WFComposeUserActivityManager : NSObject {

	BOOL _active;
	WFWorkflow* _workflow;
	NSDictionary* _userInfo;
	UIResponder* _responder;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                     //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * responder;              //@synthesize responder=_responder - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                 //@synthesize active=_active - In the implementation block
-(void)dealloc;
-(NSDictionary *)userInfo;
-(BOOL)isActive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(UIResponder *)responder;
-(void)updateUserActivityState:(id)arg1 ;
-(void)setResponder:(UIResponder *)arg1 ;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 targetResponder:(id)arg2 ;
@end

