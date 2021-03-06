/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBAssertionDelegate;
@class NSString;

@interface BBAssertion : NSObject {

	NSString* _identifier;
	unsigned long long _transactionID;
	id<BBAssertionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BBAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<BBAssertionDelegate>)delegate;
-(void)setDelegate:(id<BBAssertionDelegate>)arg1 ;
-(id)identifier;
-(unsigned long long)transactionID;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)increaseOrIgnoreTransactionID:(unsigned long long)arg1 ;
@end

