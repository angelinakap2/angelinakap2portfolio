import org.junit.Test;


import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;

public class RleProgramTest {
    @Test
    public void countRunsTest() {
        byte[] flatData = {4,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7};
        int groups = 6; // expected result
        assertEquals(groups, RleProgram.countRuns(flatData));
    }

    @Test
    public void encodeRleTest() {
        byte[] flatData = {4,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; // input
        byte[] rleData = {2,4,15,1,15,1,5,1}; // expected result

        byte[] actualResult = RleProgram.encodeRle(flatData);

        assertArrayEquals(rleData, actualResult);
    }

    @Test
    public void toHexStringTest() {
        byte[] data = {3,15,6,4};
        String res = "3f64";

        assertEquals(res, RleProgram.toHexString(data));
    }

    @Test
    public void getDecodedLength() {
        byte[] rleData = {3, 15, 6, 4};
        int res = 9;
        int actualResult = RleProgram.getDecodedLength(rleData);

        assertEquals(res, actualResult);
    }

    @Test
    public void decodeRle() {
        byte[] rleData = {2,4,15,1,15,1,5,1,1,8,1,7};
        byte[] res = {4,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,7};
        byte[] actualResult = RleProgram.decodeRle(rleData);

        assertArrayEquals(res, actualResult);
    }

    @Test
    public void stringToData() {
        String dataString = "3f64";
        byte[] res = {3, 15, 6, 4};
        byte[] actualResult = RleProgram.stringToData(dataString);

        assertArrayEquals(res, actualResult);
    }

    @Test
    public void toRleStringTest() {
        byte[] rleData = {15, 15, 6, 4};
        String res = "15f:64";
        String actualResult = RleProgram.toRleString(rleData);

        assertEquals(res, actualResult);
    }

    @Test
    public void stringToRle() {
        String rleString = "15f:64";
        byte[] res = {15, 15, 6, 4};
        byte[] actualResult = RleProgram.stringToRle(rleString);

        assertArrayEquals(res, actualResult);
    }
}

