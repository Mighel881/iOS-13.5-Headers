/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SnapshotTimer : NSObject {

	BOOL taskIsComplete;

}

@property (assign,nonatomic) BOOL taskIsComplete; 
+(void)takeSnapshotForTask:(id)arg1 ;
-(id)init;
-(void)checkout;
-(void)checkinWithTimeout:(double)arg1 forTask:(id)arg2 ;
-(BOOL)taskIsComplete;
-(void)setTaskIsComplete:(BOOL)arg1 ;
@end
