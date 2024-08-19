import "./form.css";
import React, { useState } from "react";
import MyPrintMessege from "../printMessage/printMessage";
const Form = () => {
  const [weight, setWeight] = useState(0);
  const [height, setHeight] = useState(0);
  const [bmi, setBmi] = useState("");
  const [message, setMessage] = useState("");
  let calcBmi = (e) => {
    e.preventDefault();
    if (weight === 0 || height === 0) {
      alert("please enter a valid weight and height!!");
    } else {
      let tempbmi = (weight / (height * height)) * 10000;
      setBmi(tempbmi.toFixed(1));

      if (tempbmi < 25) {
        setMessage("you are underweight.");
      } else if (tempbmi >= 25 || tempbmi < 30) {
        setMessage("you have a healthy weight.");
      } else {
        setMessage("you are overweighted.");
      }
    }
  };
  let reload = () => {
    window.location.reload();
  };
  const myonchange = (e) => {
    setWeight(e.target.value);

  };
  return (
    <>
      <form onSubmit={calcBmi}>
        <div className="inputWeight">
          <label htmlFor="weight">Give your weight(in Kg.) :</label>
          <input
            class="weight"
            type="number"
            placeholder="entry weight"
            value={weight}
            onChange={myonchange}
          />
        </div>
        <div className="inputHeight">
          <label htmlFor="height">Give your height(in Cm.) :</label>
          <input
            class="height"
            type="number"
            placeholder="entry height"
            value={height}
            onChange={(e) => setHeight(e.target.value)}
          />
        </div>
        <button class="submit" type="submit">
          Submit
        </button>
        <button class="reload" onClick={reload}>
          Reload
        </button>
      </form>
      <MyPrintMessege bmi={bmi} message={message}></MyPrintMessege>
    </>
  );
};

export default Form;
