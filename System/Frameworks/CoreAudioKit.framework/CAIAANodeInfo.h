/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned long long numNodes; 
@property (retain) UIColor * labelColor; 
-(id)init;
-(void)refresh;
-(UIColor *)labelColor;
-(void)setLabelColor:(UIColor *)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numNodes;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
@end

