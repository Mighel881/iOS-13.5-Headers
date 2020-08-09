/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFCancelerObserver.h>

@protocol PFCancelerObserver
@required
-(void)cancelerWasCanceled:(id)arg1;

@end


@interface PFCancelerObserver : NSObject <PFCancelerObserver> {

	/*^block*/id _block;

}
+(id)observerForCanceler:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)cancelerWasCanceled:(id)arg1 ;
-(id)initWithCanceler:(id)arg1 block:(/*^block*/id)arg2 ;
@end
