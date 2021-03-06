/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface NSFilePresenterAsynchronousOperation : NSOperation {

	/*^block*/id _block;
	BOOL _isFinished;
	BOOL _isExecuting;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finish;
@end

