#import "LanSongTwoInputFilter.h"

@interface LanSongAlphaBlendFilter : LanSongTwoInputFilter
{
    GLint mixUniform;
}

// Mix ranges from 0.0 (only image 1) to 1.0 (only image 2), with 1.0 as the normal level
@property(readwrite, nonatomic) CGFloat mix; 

@end
