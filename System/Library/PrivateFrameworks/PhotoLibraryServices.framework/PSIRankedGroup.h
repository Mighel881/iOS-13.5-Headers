/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSIGroup;

@interface PSIRankedGroup : NSObject {

	PSIGroup* _group;
	double _score;

}

@property (nonatomic,readonly) PSIGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
-(double)score;
-(void)setScore:(double)arg1 ;
-(PSIGroup *)group;
-(id)initWithGroup:(id)arg1 score:(double)arg2 ;
@end

