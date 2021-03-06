/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKRequestPerformingProtocol.h>

@class CATTaskClient, NSString;

@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol> {

	CATTaskClient* _taskClient;

}

@property (nonatomic,readonly) CATTaskClient * taskClient;              //@synthesize taskClient=_taskClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CATTaskClient *)taskClient;
-(id)operationForRequest:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 ;
@end

