/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface RBEventQueueEvent : NSObject <BSDescriptionProviding> {

	id _context;
	double _eventTime;
	/*^block*/id _action;

}

@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double eventTime;                      //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)context;
-(id)action;
-(void)setContext:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setEventTime:(double)arg1 ;
-(double)eventTime;
@end
