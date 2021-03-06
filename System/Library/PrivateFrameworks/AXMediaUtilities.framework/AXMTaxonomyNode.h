/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXMTaxonomyNode : NSObject {

	NSString* _label;
	NSString* _localizedName;
	double _confidence;

}

@property (nonatomic,retain) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
-(NSString *)localizedName;
-(double)confidence;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setConfidence:(double)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

