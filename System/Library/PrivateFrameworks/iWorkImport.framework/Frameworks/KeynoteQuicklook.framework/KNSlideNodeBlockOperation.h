/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class KNSlideNode;

@interface KNSlideNodeBlockOperation : NSBlockOperation {

	KNSlideNode* _slideNode;
	long long _type;

}

@property (assign,nonatomic,__weak) KNSlideNode * slideNode;              //@synthesize slideNode=_slideNode - In the implementation block
@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(KNSlideNode *)slideNode;
-(void)setSlideNode:(KNSlideNode *)arg1 ;
-(id)initWithSlideNode:(id)arg1 type:(long long)arg2 ;
@end

