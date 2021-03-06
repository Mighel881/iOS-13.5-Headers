/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICFlowControl.h>

@interface ICFlowControlBasic : NSObject <ICFlowControl> {

	/*^block*/id shouldBeCanceled;
	/*^block*/id reportProgress;

}

@property (nonatomic,copy) id shouldBeCanceled; 
@property (nonatomic,copy) id reportProgress; 
-(BOOL)ICShouldBeCanceled;
-(void)ICReportProgress:(float)arg1 ;
-(void)setShouldBeCanceled:(id)arg1 ;
-(void)setReportProgress:(id)arg1 ;
-(id)reportProgress;
-(id)shouldBeCanceled;
-(id)initWithCancel:(/*^block*/id)arg1 ;
-(id)initWithProgress:(/*^block*/id)arg1 ;
@end

