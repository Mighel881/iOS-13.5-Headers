/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFWorkflow, NSLock, NSCountedSet;

@interface WFWorkflowModuleIndentationCache : NSObject {

	WFWorkflow* _workflow;
	NSLock* _lock;
	NSCountedSet* _indentationLevels;

}

@property (nonatomic,readonly) NSLock * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSCountedSet * indentationLevels;              //@synthesize indentationLevels=_indentationLevels - In the implementation block
@property (nonatomic,__weak,readonly) WFWorkflow * workflow;                  //@synthesize workflow=_workflow - In the implementation block
-(void)dealloc;
-(NSLock *)lock;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(unsigned long long)indentationLevelForAction:(id)arg1 ;
-(NSCountedSet *)indentationLevels;
@end
