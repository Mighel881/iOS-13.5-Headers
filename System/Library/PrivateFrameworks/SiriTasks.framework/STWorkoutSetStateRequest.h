/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@interface STWorkoutSetStateRequest : AFSiriRequest {

	long long _workoutState;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)createResponse;
-(long long)workoutState;
-(id)_initWithState:(long long)arg1 ;
@end

