/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BURandomWriteChannel <BUIOChannel>
@required
-(void)flushWithCompletion:(/*^block*/id)arg1;
-(void)writeData:(id)arg1 offset:(long long)arg2 handler:(/*^block*/id)arg3;
-(void)truncateToLength:(long long)arg1 completion:(/*^block*/id)arg2;

@end

