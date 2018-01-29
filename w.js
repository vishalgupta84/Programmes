window.onload = function() {
	var pos;
	var age={
		maximumAge:5*60*1000,
		timeout:5*1000,
		enableHighAccuracy:true
	}
	var getLocation = function(position) {
		pos=position;
		var latitude=pos.coords.latitude;
		var longitude=pos.coords.longitude;
		//alert("latitude:"latitude);
		document.getElementById('loc').innerHTML = "latitude:"+ latitude+"\nlongitude:"+longitude;
    console.log(longitude);
	};
	var err=function(error){
		//document.getElementById('loc').innerHTML=error.code;
	};
	navigator.geolocation.getCurrentPosition(getLocation,err,age);
};
