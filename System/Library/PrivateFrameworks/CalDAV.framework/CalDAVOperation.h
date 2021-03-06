/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	BOOL _isCancellingTaskGroups;
	id<CalDAVPrincipal> _principal;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,retain) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancelTaskGroup;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(NSMutableSet *)outstandingTaskGroups;
-(id)initWithPrincipal:(id)arg1 ;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
-(void)bailWithError:(id)arg1 ;
@end

